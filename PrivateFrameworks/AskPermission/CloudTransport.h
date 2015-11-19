/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <askpermissiond/RequestTransportProtocol.h>

@interface CloudTransport : NSObject <RequestTransportProtocol>
-(void)_queryForNewRequestsWithFamilyCircle:(id)arg1 lastPollDate:(id)arg2 recordCursor:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)propagateNewRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)propagateStatusUpdateForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pollForNewRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pollForNewResponses;
-(id)init;
-(id)_database;
@end
