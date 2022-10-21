//
//  QNWReceiveModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QNWReceiveModel : NSObject
/**是否领取了红包*/
@property(nonatomic,assign) float amount;
/**红包总个数*/
@property(nonatomic,assign) int number;
/**已领取的红包个数*/
@property(nonatomic,assign) int received_number;

@end

NS_ASSUME_NONNULL_END
