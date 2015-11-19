/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaRemote/MRApplicationActivity.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity

@property (nonatomic,copy) NSString * primaryApplicationDisplayID; 
@property (nonatomic,copy) NSString * secondaryApplicationDisplayID; 
@property (assign,nonatomic) char shouldPrepareAppPlaybackQueue; 
@property (assign,nonatomic) int status; 
-(void)setStatus:(int)arg1 ;
-(void)setPrimaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setSecondaryApplicationDisplayID:(NSString *)arg1 ;
-(void)setShouldPrepareAppPlaybackQueue:(char)arg1 ;
@end

