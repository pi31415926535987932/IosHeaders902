/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (assign,nonatomic) id<CoreDAVCopyTaskDelegate> delegate; 
-(void)dealloc;
-(id)httpMethod;
-(char)validate:(id*)arg1 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end
