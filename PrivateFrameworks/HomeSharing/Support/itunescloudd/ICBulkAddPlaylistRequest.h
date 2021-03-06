/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/ICRequest.h>

@interface ICBulkAddPlaylistRequest : ICRequest
+(id)requestWithDatabaseID:(unsigned)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
+(id)requestWithDatabaseID:(unsigned)arg1 playlistName:(id)arg2 ;
-(id)_bodyDataForPlaylistName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3 ;
-(id)initWithDatabaseID:(unsigned)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

