/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADService.h>

@protocol ADCommandCenterRequestDelegate, ADUIServiceDelegate;
@interface ADUIService : ADService {

	id<ADCommandCenterRequestDelegate> _requestDelegate;
	id<ADUIServiceDelegate> _delegate;

}
-(void)handleCommand:(id)arg1 forDomain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)lockRestrictedCommands;
-(id)initWithRequestDelegate:(id)arg1 ;
-(id)commandsForDomain:(id)arg1 ;
-(char)implementsCommand:(id)arg1 forDomain:(id)arg2 ;
-(id)handle;
-(void)setDelegate:(id)arg1 ;
-(id)domains;
@end

