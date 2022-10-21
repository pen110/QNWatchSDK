//
//  QNWCourseModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/10.
//

#import <Foundation/Foundation.h>
#import "QNWUserStaticModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface WLiveMenusModel : NSObject
@property (nonatomic,strong)NSString *code;
@property (nonatomic,strong)NSString *content;
@property (nonatomic,assign)int ID;
@property (nonatomic,assign)int isShow;
@property (nonatomic,assign)int menuOrder;
@property (nonatomic,strong)NSString *name;
@property (nonatomic,strong)NSString *type;
@end

@interface HeadVideoModel : NSObject
@property (nonatomic,strong)NSString *head_video_url;
@property (nonatomic,assign)int is_show;
@property (nonatomic,assign)int transcoding;
@end

@interface NoticeDataModel : NSObject
@property (nonatomic,strong)NSString *content;
@property (nonatomic,assign)int noticeId;
@property (nonatomic,assign)int type;
@end

@interface QNWCourseModel : NSObject
@property (nonatomic,assign)int active;
@property (nonatomic,assign)int anonymous_login;
@property (nonatomic,strong)NSString *app_name;
@property (nonatomic,assign)int apply_form;
@property (nonatomic,assign)int apply_lottery;
@property (nonatomic,assign)int applyform_enable;
@property (nonatomic,assign)int audit;
@property (nonatomic,strong)NSString *background;
@property (nonatomic,strong)NSString *banner_image;
@property (nonatomic,assign)int banner_status;
@property (nonatomic,strong)NSString *banner_url;
@property (nonatomic,assign)int barrage;
@property (nonatomic,assign)int chat_room_audit;
@property (nonatomic,strong)NSString *chat_room_id;
@property (nonatomic,assign)int coupon_data;
@property (nonatomic,strong)NSString *create_time;
@property (nonatomic,strong)NSString *descriptions;
@property (nonatomic,assign)int doc_inUse;
@property (nonatomic,strong)NSString *end_time;
@property (nonatomic,assign)int enterprise;
@property (nonatomic,assign)int enterprise_card;
@property (nonatomic,strong)NSString *foreign_language_watch;
@property (nonatomic,assign)int has_product;
@property (nonatomic,strong)HeadVideoModel *head_video;
@property (nonatomic,assign)int ID;
@property (nonatomic,strong)NSString *image;
@property (nonatomic,assign)int isImageText;
@property (nonatomic,assign)int isNew;
@property (nonatomic,assign)int isOpen;
@property (nonatomic,assign)int isPreview;
@property (nonatomic,assign)int isProhibit;
@property (nonatomic,assign)int isSpeed;
@property (nonatomic,assign)int is_dummy_pv;
@property (nonatomic,assign)int is_open_english;
@property (nonatomic,assign)int is_open_lottery;
@property (nonatomic,assign)int is_share;
@property (nonatomic,assign)int kunshan_room_limit;
@property (nonatomic,strong)NSString *live_image;
@property (nonatomic,strong)NSArray<WLiveMenusModel *>*live_menus;
@property (nonatomic,strong)NSArray<WLiveMenusModel *>*live_menus_en;
@property (nonatomic,assign)int low_delay;
@property (nonatomic,strong)NSString *m3u8_url;
@property (nonatomic,assign)int marquee;
@property (nonatomic,strong)NSArray *meme_data;
@property (nonatomic,strong)NSArray *menus;
@property (nonatomic,strong)NSString *nickname;
@property (nonatomic,strong)NoticeDataModel *notice_data;
@property (nonatomic,strong)NSString *old_chat_room_id;
/// 横屏竖屏 1竖屏 2 横屏
@property (nonatomic,assign)int play_mode;
@property (nonatomic,strong)NSString *pull_hls_480_p;
@property (nonatomic,strong)NSString *pull_hls_720_p;
@property (nonatomic,strong)NSString *pull_rtmp;
@property (nonatomic,strong)NSString *pull_rtmp_480_p;
@property (nonatomic,strong)NSString *pull_rtmp_720_p;
@property (nonatomic,assign)int qev_exists;
@property (nonatomic,assign)int quesstion_on_off;
@property (nonatomic,assign)int rank_show;
@property (nonatomic,assign)int record_access;
@property (nonatomic,strong)NSString *record_endDate;
@property (nonatomic,assign)int risk_rating;
/**2 中风险*/
@property (nonatomic,assign)int risk_type;
@property (nonatomic,strong)NSDictionary *seckill_data;
@property (nonatomic,strong)NSString *share_card;
@property (nonatomic,strong)NSString *start_time;
@property (nonatomic,assign)int status;
@property (nonatomic,strong)NSString *stream_name;
@property (nonatomic,assign)int stream_type;
@property (nonatomic,assign)int stream_url_type;
@property (nonatomic,strong)NSDictionary *teacher;
@property (nonatomic,strong)NSString *teacher_id;
@property (nonatomic,strong)NSString *teacher_name;
@property (nonatomic,strong)NSString *third_image;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,assign)int type;
@property (nonatomic,strong)NSString *updateDate;
@property (nonatomic,strong)NSString *update_leancloud;
@property (nonatomic,strong)NSString *url_hls;
@property (nonatomic,assign)int user;
@property (nonatomic,assign)int user_id;
@property (nonatomic,strong)NSString *videoStore;
@property (nonatomic,strong)NSString *video_id;
@property (nonatomic,strong)NSString *video_store_id;
@property (nonatomic,assign)int watermark;
@property (nonatomic,strong)NSString *white_board_roomToken;
@property (nonatomic,strong)NSString *white_board_uuid;

@property (nonatomic,strong)QNWUserStaticModel *userModel;
@end

NS_ASSUME_NONNULL_END
