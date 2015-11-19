/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary, HSCloudItemIDList;

@interface SagaCreatePlaylistOperation : CloudLibraryOperation {

	unsigned long long _playlistPersistentID;
	NSDictionary* _properties;
	HSCloudItemIDList* _trackList;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned long long playlistSagaID;              //@synthesize playlistSagaID=_playlistSagaID - In the implementation block
-(id)initWithPlaylistPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 ;
-(unsigned long long)playlistSagaID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isPersistent;
-(void)main;
@end

