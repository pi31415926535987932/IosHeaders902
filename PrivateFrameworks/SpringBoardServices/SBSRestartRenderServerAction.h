/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 5:00:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface SBSRestartRenderServerAction : BSAction

@property (nonatomic,readonly) NSURL * targetURL; 
+(id)restartActionWithTargetRelaunchURL:(id)arg1 ;
-(NSURL *)targetURL;
@end

