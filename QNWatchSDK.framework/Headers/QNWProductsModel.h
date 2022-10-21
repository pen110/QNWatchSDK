//
//  QNWProductsModel.h
//  QNWatchSDK
//
//  Created by 潘欣 on 2022/10/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProductItems : NSObject
@property(nonatomic,strong) NSString *code;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,assign) int type;
@end

@interface CustomProductData : NSObject
@property(nonatomic,assign) int ID;
@property(nonatomic,assign) int is_open;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *price;
@property(nonatomic,assign) int sort_no;
@property(nonatomic,strong) NSString *url;
@end

@interface QNWProductItemsModel : NSObject
@property(nonatomic,strong) NSString *createDate;
@property(nonatomic,assign) int ID;
@property(nonatomic,assign) int is_open;
@property(nonatomic,strong) NSString *price;
@property(nonatomic,strong) ProductItems *product;
@property(nonatomic,assign) NSInteger sort_no;
@property(nonatomic,strong) NSString *updateDate;
@property(nonatomic,assign) int video_info;
@property(nonatomic,assign) int video_info_id;
@property(nonatomic,strong) CustomProductData *custom_product_data;
@end


@interface QNWProductsModel : NSObject
@property(nonatomic,assign) int code;
@property(nonatomic,assign) int count;
@property(nonatomic,strong) NSString *msg;
@property(nonatomic,assign) int next;
@property(nonatomic,assign) int pages;
@property(nonatomic,assign) int previous;
@property (nonatomic,strong)NSArray<QNWProductItemsModel *>*result;
@end



NS_ASSUME_NONNULL_END
