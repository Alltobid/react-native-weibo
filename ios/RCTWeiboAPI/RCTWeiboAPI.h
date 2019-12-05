//
//  RCTWeiboAPI.h
//  RCTWeiboAPI
//
//  Created by LvBingru on 1/6/16.
//  Copyright © 2016 erica. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#elif __has_include("React/RCTBridgeModule.h")
#import "React/RCTBridgeModule.h"
#endif

@interface RCTWeiboAPI : NSObject<RCTBridgeModule>

@end
