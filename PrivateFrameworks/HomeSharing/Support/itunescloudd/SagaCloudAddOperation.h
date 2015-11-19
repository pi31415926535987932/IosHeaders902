/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class ML3MusicLibrary;

@interface SagaCloudAddOperation : CloudLibraryOperation {

	ML3MusicLibrary* _musicLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
-(void)setMusicLibrary:(ML3MusicLibrary *)arg1 ;
-(unsigned)currentDatabaseRevision;
-(id)cloudAddRequestWithDatabaseID:(unsigned)arg1 ;
-(id)cloudAddRequestDescription;
-(void)processAddedItems:(id)arg1 ;
-(void)removePendingAddedItemsForPermanentlyFailedOperation;
-(id)init;
-(char)isPersistent;
-(void)main;
-(ML3MusicLibrary *)musicLibrary;
@end

