/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBCDomainSyncServiceProtocol <NSObject>
@required
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(char)arg2;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)deletePlaybackPositionEntity:(id)arg1;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
-(oneway void)deletePlaybackPositionEntities;

@end

