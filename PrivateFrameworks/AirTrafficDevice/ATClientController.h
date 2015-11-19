/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirTrafficDevice/AirTrafficDevice-Structs.h>
@class NSDictionary;

@interface ATClientController : NSObject {

	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;

}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)arg1 ;
-(void)dealloc;
-(id)clientForDataclass:(id)arg1 ;
-(id)_queueForClient:(id)arg1 ;
-(char)_loadClientsForDataclasses:(id)arg1 ;
-(void)resetQueues;
-(void)waitToDrain;
-(id)allClients;
@end

