//
//  AZAOTool.h
//  SDK_Demo
//
//  Created by Poul on 2019/6/5.
//  Copyright © 2019 Poul. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AZAOToolDelegate <NSObject>

- (void)btOpenSuccess;
- (void)btOpenFailed;
- (void)btConnectSuccess;
- (void)btConnectFailed;
- (void)btDisconnected;
- (void)btOnError:(NSString *_Nullable)msg;

@end
NS_ASSUME_NONNULL_BEGIN

@interface AZAOTool : NSObject
@property (nonatomic, weak) id<AZAOToolDelegate>delegate;
+ (instancetype)shareInstance;
- (void)initTool:(NSString *)urlStr userInfo:(NSDictionary *)userInfo;
- (void)btOpenDoor:(NSDictionary *)info;
/** 手动连接蓝牙*/
- (void)connectBlueTooth:(NSDictionary *)userInfo;
// 手动断开蓝牙
- (void)btEndConnect;
@end

NS_ASSUME_NONNULL_END
