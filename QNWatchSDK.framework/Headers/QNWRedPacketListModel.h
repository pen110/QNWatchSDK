//
//  QNWRedPacketListModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface User : NSObject
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *image;
@end

@interface QNWResultModel : NSObject
@property(nonatomic,assign) int ID;
@property(nonatomic,strong) NSString *create_time;
@property(nonatomic,strong) NSString *update_time;
@property(nonatomic,assign) float amount;
@property(nonatomic,assign) int number;
@property(nonatomic,assign) int received_number;
/**触发总点赞数*/
@property(nonatomic,assign) int handed_out_limit;
@property(nonatomic,assign) int status;
@property(nonatomic,strong) NSString *handed_out_time;
@property(nonatomic,strong) NSString *tip_text;
@property(nonatomic,assign) int video_info;
@property(nonatomic,strong) NSString *video_info_title;
@property(nonatomic,assign) int org_id;
@property(nonatomic,assign) int enterprise_id;
@property(nonatomic,strong) NSString *org_name;
@property(nonatomic,strong) User *user;
@end

@interface QNWRedPacketListModel : NSObject
@property(nonatomic,assign) int code;
@property(nonatomic,strong) NSString *msg;
@property (nonatomic,strong)NSArray<QNWResultModel *>*result;
@end

NS_ASSUME_NONNULL_END
