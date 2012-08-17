//
//  NIProtocolMessages.h
//  Macchina
//
//  Created by Antonio "Willy" Malara on 17/08/12.
//  Copyright (c) 2012 Antonio "Willy" Malara. All rights reserved.
//

#import "NIMessageBases.h"

@interface NIGetServiceVersionMessage  : NIPlainMessage       @end
@interface NIGetDeviceAvailableMessage : NIPlainMessage       @end
@interface NIDeviceStateChangeMessage  : NINumberValueMessage @end
@interface NIGetDeviceEnabledMessage   : NINumberValueMessage @end

@interface NIDeviceConnectMessage : NIMessage
@property uint32_t   controllerId;
@property uint32_t   boh;
@property uint32_t   clientRole;
@property NSString * clientName;
@end

@interface NISetAsciiStringMessage : NIMessage
@property uint32_t   boh1;
@property uint32_t   boh2;
@property NSString * string;
@end
