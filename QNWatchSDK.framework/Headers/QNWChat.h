//
//  QNWChat.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/10.
//

#import <Foundation/Foundation.h>
#import "QNWBaseMsgModel.h"
#import "QNWMessageModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void ( ^successBlock) (id content);
@class QNWChat;
@protocol QNChatDelegate <NSObject>

@optional

/// 直播间观看信息例如：点赞数，观看人数等 （直播中每分钟调用一次）
/// @param chat chat
/// @param likeInfo 信息model
- (void)qnChat:(QNWChat *)chat likeInfo:(QNWAttModel *)likeInfo;

/// 送礼通知
/// @param chat chat description
/// @param gift gift description
-(void)qnchat:(QNWChat *)chat sendGift:(nullable QNWAttModel *)gift;


/// 打开红包 has_red = 1
/// @param chat chat description
/// @param redPacket gift description
-(void)qnchat:(QNWChat *)chat hasRedPacket:(nullable QNWTextModel *)redPacket;


/// 接收到新消息
/// @param messageModel 消息
-(void)qnChat:(QNWChat *)chat onNewMessageRecive:(QNWBaseMsgModel *)messageModel;

///// 直播状态更新
///// @param statue 直播类型
- (void)getUpdateRoomLiveStatus:(NSString *)statue;

/// 是否被禁言
/// @param isUserForbidden 是否被禁言 1 禁言某个人，2，解开禁言某个人，3，全体禁言，4，解开全体禁言
-(void)qnChat:(QNWChat *)chat isUserForbidden:(int)isUserForbidden;

/// 预约直播的人数
/// @param chat chat description
/// @param count count description
-(void)qnchat:(QNWChat *)chat reserveCount:(int)count;

/// 是否开启聊天审核
/// @param chat chat description
/// @param isCheck isCheck description
-(void)qnchat:(QNWChat *)chat chatcheck:(BOOL)isCheck;

/// 商品上下架
/// @param chat chat description
/// @param products 商品数组对象
- (void)qnchat:(QNWChat *)chat productList:(NSArray *)products;

/// 收到公告消息
/// @param chat chat description
/// @param notice 公告内容，公告id 和公告类型
- (void)qnchat:(QNWChat *)chat noticeControl:(QNWAttModel *)notice;

/// 全平台禁言列表
/// @param chat chat description
/// @param tabooList tabooList description
- (void)qnchat:(QNWChat *)chat platformTabooList:(NSArray *)tabooList;

@end

@interface QNWChat : NSObject
/// 聊天代理
@property (nonatomic,weak) id<QNChatDelegate>chatDelegate;
@property(nonatomic,assign) BOOL isFirst;
/// 初始化聊天室
/// @param callback callback description
- (void)initClientcallback:(void (^)(BOOL success, NSError * _Nullable error))callback;

/// 获取历史信息
/// @param count 每页显示多少条信息，默认一次取100条
/// @param callback 回调数据
-(void)getHistoryMessage:(int)count callback:(void (^)(NSArray<QNWBaseMsgModel*> *message, NSError * _Nullable error))callback;

/// 发送文字消息
/// @param text 文字
/// @param callback 回调
-(void)sendTextMessage:(NSString *)text callback:(void (^)(BOOL, NSError * _Nullable))callback;

@end

NS_ASSUME_NONNULL_END
