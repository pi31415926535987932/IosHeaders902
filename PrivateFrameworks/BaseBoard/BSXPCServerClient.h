/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BSXPCServerClient <NSObject>
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@required
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_xpc_object>)connection;

@end

