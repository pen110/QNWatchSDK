//
//  QNWUserStaticModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNWUserStaticModel : NSObject
/**主播的头像*/
@property (nonatomic,strong)NSString *anchor_image;
/**主播的昵称*/
@property (nonatomic,strong)NSString *anchor_nickname;
/**聊天审核开关*/
@property (nonatomic,assign)int chat_room_audit;
/** 美化后点赞数 */
@property (nonatomic,assign)int dummy_like_count;
/** 美化后直播浏览量 */
@property (nonatomic,assign)int dummy_pv_count;
/**全体禁言*/
@property (nonatomic,assign)int isProhibit;
/** 是否被禁言 */
@property (nonatomic,assign)int is_forbidden;
/** 是否被踢出直播间 */
@property (nonatomic,assign)int is_kickout;
/**点赞数*/
@property (nonatomic,assign)int like_count;
/**(1,直播中, 2,主播不在, 3,已结束, 4,预告, 5,主播暂停, 6,回放中)*/
@property (nonatomic,assign)int live_status;
/** 真实直播浏览量 */
@property (nonatomic,assign)int pv_count;
@property (nonatomic,assign)int sign_course;
@end

NS_ASSUME_NONNULL_END
