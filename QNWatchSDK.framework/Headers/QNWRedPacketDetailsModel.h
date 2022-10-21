//
//  QNWRedPacketDetailsModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNWUserRedPacket : NSObject
@property(nonatomic,strong) NSString *nickname;
@property(nonatomic,strong) NSString *image;
@end

@interface QNWDetailsResultModel : NSObject
@property(nonatomic,assign) int ID;
@property(nonatomic,strong) NSString *create_time;
@property(nonatomic,strong) NSString *update_time;
@property(nonatomic,assign) int status;
/**金额*/
@property(nonatomic,assign) float amount;
@property(nonatomic,strong) NSString *scene_key;
@property(nonatomic,assign) int luckiest;
/**领取时间*/
@property(nonatomic,strong) NSString *received_time;
@property(nonatomic,strong) NSString *url;
@property(nonatomic,assign) int red_packet;
@property(nonatomic,strong) NSDictionary *ret_json;
@property(nonatomic,strong) QNWUserRedPacket *user;
@end


@interface QNWRedPacketDetailsModel : NSObject
@property(nonatomic,assign) int code;
@property(nonatomic,assign) int count;
@property(nonatomic,strong) NSString *msg;
@property(nonatomic,assign) int next;
@property(nonatomic,assign) int pages;
@property(nonatomic,assign) int previous;
@property (nonatomic,strong)NSArray<QNWDetailsResultModel *>*result;
@end

NS_ASSUME_NONNULL_END
