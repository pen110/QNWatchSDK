//
//  QNWPlatformTabooModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/12.
//

#import <Foundation/Foundation.h>
#import "QNWMessageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface QNWPlatformTabooModel : NSObject
@property(nonatomic,assign) int code;
@property(nonatomic,assign) int count;
@property(nonatomic,strong) NSString *msg;
@property(nonatomic,assign) int next;
@property(nonatomic,assign) int pages;
@property(nonatomic,assign) int previous;
@property (nonatomic,strong)NSArray<QNWPlatformTabooList *>*result;
@end

NS_ASSUME_NONNULL_END
