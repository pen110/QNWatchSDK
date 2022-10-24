//
//  QNWatchSDKManager.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/9/28.
//

#import <Foundation/Foundation.h>
#import "QNWUserStaticModel.h"
#import "QNWCourseModel.h"
//聊天室
#import "QNWChat.h"
//请求成功
typedef void ( ^successBlock) (id _Nullable json);
// 请求失败
typedef void (^failure)(id _Nullable error);

NS_ASSUME_NONNULL_BEGIN
@class QNWatchSDKManager;
@protocol QNWatchDelegate <NSObject>

-(void)courseInfo:(nullable QNWCourseModel *)infoModel error:(nullable NSError *)error;

/// 接收到新消息
/// @param messageModel 消息
-(void)onManager:(QNWatchSDKManager *)manager onNewMessageRecive:(QNWBaseMsgModel *)messageModel;

/// 是否关注了主播
/// @param manager manager description
/// @param success success description
- (void)manager:(QNWatchSDKManager *)manager isFollowAnchor:(BOOL)success;

/// 是否被禁言  是否被禁言 1 禁言某个人，2，解开禁言某个人，3，全体禁言，4，解开全体禁言
/// @param isUserForbidden 是否被禁言
-(void)isUserForbidden:(int)isUserForbidden;

/// 预约直播的人数
/// @param manager manager description
/// @param count count description
-(void)qnmanager:(QNWatchSDKManager *)manager reserveCount:(int)count;

/// 是否开启聊天审核
/// @param manager manager description
/// @param isCheck isCheck yes打开，no 关闭
-(void)qnmanager:(QNWatchSDKManager *)manager chatcheck:(BOOL)isCheck;

/// 商品上下架
/// @param manager chat description
/// @param products 商品数组对象
-(void)qnmanager:(QNWatchSDKManager *)manager productList:(NSArray *)products;

/// 全平台禁言列表
/// @param manager chat description
/// @param tabooList tabooList description
-(void)qnmanager:(QNWatchSDKManager *)manager platformTabooList:(NSArray *)tabooList;

/// 直播点赞观看数据 实时更新
/// @param likeInfo 点赞观看信息
-(void)onManager:(QNWatchSDKManager *)manager likeInfo:(QNWAttModel *)likeInfo;

/// 是否中风险
/// @param manager manager description
/// @param type 2是中风险
- (void)onManager:(QNWatchSDKManager *)manager riskType:(int)type;


/// 收到公告消息
/// @param manager chat description
/// @param notice 公告内容，公告id 和公告类型
- (void)onManager:(QNWatchSDKManager *)manager noticeControl:(QNWAttModel *)notice;


@end

@interface QNWatchSDKManager : NSObject

@property(nonatomic,weak)id<QNWatchDelegate>delegate;

/// 管理SDK单例
+ (instancetype)shardManager;

/**聊天室*/
@property (nonatomic,strong)QNWChat *_Nullable chat;

/// 断开
-(void)close;

/// 用户注册
/// @param user token和liveId
/// @param success success description
/// @param failure failure description
- (void)userRegister:(NSDictionary *)user success:(successBlock)success failure:(failure)failure;

/// 关注主播
/// @param success success description
/// @param failure failure description
- (void)followAnchorSuccess:(successBlock)success failure:(failure)failure;


/// 取消关注主播
/// @param success success description
/// @param failure failure description
- (void)cancleAnchorSuccess:(successBlock)success failure:(failure)failure;

/// 预约直播
/// @param liveId 直播间id
/// @param success success description
/// @param failure failure description
- (void)courseReserveWithLive:(NSString *)liveId success:(successBlock)success failure:(failure)failure;

/// 直播预约信息
/// @param liveId 直播间id
/// @param success success description
/// @param failure failure description
- (void)courseIsreserveLive:(NSString *)liveId success:(successBlock)success failure:(failure)failure;

/// 商品列表
/// @param success success description
/// @param failure failure description
- (void)productsListSuccess:(successBlock)success failure:(failure)failure;

/// 商品点击
/// @param products {product:售卖商品主键id, product_name:商品名称}
/// @param success success description
/// @param failure failure description
- (void)productsListClick:(NSDictionary *)products success:(successBlock)success failure:(failure)failure;


/// 点赞，点击点赞按钮3秒后请求此接口,做个延迟操作,客户有可能连续点击点赞按钮
/// @param count 点赞个数
/// @param success success description
/// @param failure failure description
-(void)doLikeWithCount:(int)count Action:(successBlock)success failure:(void (^)(NSError * _Nonnull))failure;

/// 获取全平台禁言的列表
/// @param success success description
/// @param failure failure description
- (void)platformTabooListSuccess:(successBlock)success failure:(failure)failure;

/// 是否已领取红包
/// @param red_packetId 红包的id
/// @param success success description
/// @param failure failure description
- (void)redPacketIsReceivce:(int)red_packetId success:(successBlock)success failure:(failure)failure;

/// 红包领取详情， 已领取的金额列表
/// @param red_packetId 红包id
/// @param success success description
/// @param failure failure description
- (void)redPacketDetails:(NSString *)red_packetId success:(successBlock)success failure:(failure)failure;

/// 红包列表
/// @param liveId 直播间id
/// @param success success description
/// @param failure failure description
- (void)redPacketWithLiveId:(NSString *)liveId success:(successBlock)success failure:(failure)failure;

/// 抢红包
/// @param redpacket
/// red_packet 红包id
/// video_info 直播id
/// @param success success description
/// @param failure failure description
- (void)receivceRedPacket:(NSDictionary *)redpacket success:(successBlock)success failure:(failure)failure;

//返回returnCode描述：
//1、客户风险等级适当且有留痕记录 返回0，可以直接观看
//2、客户风险等级适当且无留痕记录 返回-11，跳转至h5页面留痕
//4、返回-1 直播适当性不匹配
//3、其他情况返回非0


/// 中风险直播签署协议认证
/// @param ticket 传ticket
/// @param success success description
/// @param failure failure description
- (void)courseCanView:(NSString *)ticket success:(successBlock)success failure:(failure)failure;
@end


NS_ASSUME_NONNULL_END
