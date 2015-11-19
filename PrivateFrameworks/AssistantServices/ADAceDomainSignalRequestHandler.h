/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriRequestHandling.h>

@class ADServiceManager, NSString;

@interface ADAceDomainSignalRequestHandler : NSObject <AFSiriRequestHandling> {

	ADServiceManager* _serviceManager;

}

@property (assign,nonatomic,__weak) ADServiceManager * serviceManager;              //@synthesize serviceManager=_serviceManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setServiceManager:(ADServiceManager *)arg1 ;
-(void)handleSiriRequest:(id)arg1 deliveryHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(ADServiceManager *)serviceManager;
@end

