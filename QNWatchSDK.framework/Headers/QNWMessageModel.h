//
//  QNWMessageModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/11.
//

#import <Foundation/Foundation.h>
#import "QNWProductsModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface QNWPlatformTabooList : NSObject
@property(nonatomic,strong) NSString *createDate;
@property(nonatomic,strong) NSString *updateDate;
@property(nonatomic,strong) NSString *user;
@property(nonatomic,strong) NSString *image;
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,assign) int ID;
@end

@interface QNUserInfoModel : NSObject
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,strong) NSString *yin_user_id;
@property(nonatomic,strong) NSString *qiniu_user_id;
@property(nonatomic,assign) int exprise_time;
@property(nonatomic,assign) int timestamp;
// 子用户token
@property(nonatomic,strong) NSString *token;
@property(nonatomic,assign) BOOL  is_mic_mute;
@property(nonatomic,assign) BOOL  is_camera_mute;
@property(nonatomic,assign) BOOL  hands_up;
@property(nonatomic,assign) int hands_up_time;
@property(nonatomic,assign) int enter_time;
@property(nonatomic,assign) BOOL  is_invited;
@property(nonatomic,assign) int role;
@property(nonatomic,assign) BOOL  interactive;
@end

@interface QNWRoomStatusModel : NSObject

/// 主持人信息
@property(nonatomic,strong) QNUserInfoModel *hostUserInfo;

/// 是否在房间中
@property(nonatomic,assign) BOOL  isUseInhome;

/// 是否上麦
@property(nonatomic,assign) BOOL  isUserPublish;

/// 是否是举手模式上麦(否则为自由上麦模式)
@property(nonatomic,assign) BOOL  isRoomHandsUp;

/// 是否全部静音
@property(nonatomic,assign) BOOL  isRoomMuteAll;
@end

@interface QNWAttModel : NSObject
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,assign) int userStatus;
//真实的
@property(nonatomic,assign) int pv_count;
@property(nonatomic,assign) int like_count;
/**触发总点赞数*/
@property(nonatomic,assign) int handed_out_limit;
//虚拟的
@property(nonatomic,assign) int dummy_like;
@property(nonatomic,assign) int dummy_pv;

@property(nonatomic,assign) int dummy_like_count;
//预约直播的人数
@property(nonatomic,assign) int reserve_count;
@property(nonatomic,strong) NSString *ws_type;
@property(nonatomic,strong) NSString *type;
@property(nonatomic,assign) BOOL status;
@property(nonatomic,assign) int count;
@property(nonatomic,strong) NSString *red_packet_data;


/**用户id*/
@property(nonatomic,strong) NSString* userId;
/**用户头像*/
@property(nonatomic,strong) NSString* image;
/**用户昵称*/
@property(nonatomic,strong) NSString* nickname;

/** 奖品id */
@property(nonatomic,strong) NSString *prize_id;
/** 奖品名字 */
@property(nonatomic,strong) NSString *prize_name;
/** 奖品介绍 */
@property(nonatomic,strong) NSString *receive_instruction;

@property(nonatomic,strong) NSString *run_scope;
/** 公告内容 */
@property (nonatomic,copy) NSString *noticeContent;

/**公告id*/
@property (nonatomic,copy) NSString *noticeId;

/**公告类型  noticeType = 1 是单行滚动; = 2 弹窗显示 */
@property (nonatomic,assign) int noticeType;

/** true 和flase 秒杀的状态*/
@property (nonatomic,assign)BOOL seckill_status;

/**秒杀id*/
@property (nonatomic,copy) NSString *seckill_id;

/**秒杀的时间*/
@property (nonatomic,copy) NSString *seckill_time;

@property (nonatomic,copy) NSString *third_user_id;

//用户头像
@property (nonatomic,copy) NSString *user_image;
//礼物名字
@property (nonatomic,copy) NSString *gift_name;
//礼物图片
@property (nonatomic,copy) NSString *gift_image;
//礼物个数
@property(nonatomic,assign) int gift_count;
//商品上下架对象
@property (nonatomic,strong)NSArray<QNWProductItemsModel *>*product_list;

//全平台禁言列表对象
@property (nonatomic,strong)NSArray<QNWPlatformTabooList *>*platform_taboo_list;
@end

//引用的消息体
@interface QNWReferenceInfo : NSObject
@property(nonatomic,strong) NSString *attribute;
@property(nonatomic,strong) NSString *avatar;
@property(nonatomic,strong) NSString *content;
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) NSString *timer;
@property(nonatomic,strong) NSString *type;
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,strong) NSString *userName;
@end


@interface QNWTextModel : NSObject
@property(nonatomic,strong) NSString *text;
@property(nonatomic,strong) NSString *type;
@property(nonatomic,strong) NSString *ws_type;
@property(nonatomic,strong) NSString *userId;
@property(nonatomic,assign) BOOL  status;
@property(nonatomic,assign) int value;
@property(nonatomic,strong) NSString *timeStamp;
@property(nonatomic,strong) NSString *prizeId;
@property(nonatomic,strong) NSString *red_id;
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *giftImg;
@property(nonatomic,strong) NSString *userName;
@property(nonatomic,strong) NSString *giftCount;
@property(nonatomic,strong) NSString *giftName;
@property(nonatomic,strong) NSString *position;
@property(nonatomic,assign) int signaling_type;
@property(nonatomic,strong) NSString *user_id;
@property(nonatomic,assign) BOOL  is_allow;
@property(nonatomic,assign) BOOL  is_mic_mute;
@property(nonatomic,assign) BOOL  is_camera_mute;
@property(nonatomic,assign) BOOL  hands_up;
@property(nonatomic,assign) int hands_up_time;
@property(nonatomic,assign) int enter_time;
@property(nonatomic,assign) BOOL  is_invited;
@property(nonatomic,assign) int role;
@property(nonatomic,assign) BOOL  closed_wheat;
@property(nonatomic,assign) int  wheat_mode;
@property(nonatomic,assign) BOOL  interactive;
//@property(nonatomic,strong)AnswerSubjectModel *topicInfo;
//@property(nonatomic,strong)NSArray<TopicListModel*>*topicList;

//引用发送的消息
@property(nonatomic,strong) NSString *msg;
@property(nonatomic,strong) QNWReferenceInfo *referenceInfo;

/**是否打开红包*/
@property(nonatomic,assign) int has_red;
@end



@interface QNWFileModel : NSObject
@property(nonatomic,strong) NSString *objId;
@property(nonatomic,strong) NSString *url;
@end

@interface QNWMessageModel : NSObject
@property(nonatomic,strong) NSString *_lctype;
@property(nonatomic,strong) QNWTextModel *_lctext;
@property(nonatomic,strong) QNWAttModel *_lcattrs;
@property(nonatomic,strong) QNWFileModel *_lcfile;
@end


@interface QNWLiveNoticeModel : NSObject
@property(nonatomic,assign) int ID;
@property(nonatomic,strong) NSString *content;
@property(nonatomic,assign) int type;
@property(nonatomic,strong) NSString *createDate;
@end

NS_ASSUME_NONNULL_END
