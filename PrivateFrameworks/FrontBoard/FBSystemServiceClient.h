/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:28:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class FBProcess;


@protocol FBSystemServiceClient <NSObject>
@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,retain) id<FBSystemServiceFacilityClient> facilityClient; 
@required
-(NSObject*<OS_xpc_object>)connection;
-(FBProcess *)process;
-(id<FBSystemServiceFacilityClient>)facilityClient;
-(void)setFacilityClient:(id)arg1;
-(int)pid;

@end

