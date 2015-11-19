/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADService.h>

@protocol OS_dispatch_queue, ADAceRequestTransformer, ADAceResponseTransformer, AFSiriRequestHandling;
@class NSObject, ADServiceCommandType;

@interface ADSiriTaskService : ADService {

	NSObject*<OS_dispatch_queue> _queue;
	ADServiceCommandType* _commandType;
	id<ADAceRequestTransformer> _requestTransformer;
	id<ADAceResponseTransformer> _responseTransformer;
	id<AFSiriRequestHandling> _requestHandler;

}
-(id)initWithCommandType:(id)arg1 requestTransformer:(id)arg2 responseTransformer:(id)arg3 requestHandler:(id)arg4 ;
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)commandsForDomain:(id)arg1 ;
-(char)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(id)requestCommandAceType;
-(id)domains;
@end

