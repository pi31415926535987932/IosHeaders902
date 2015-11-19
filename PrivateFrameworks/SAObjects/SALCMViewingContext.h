/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, SALCMContent, NSString, NSArray;

@interface SALCMViewingContext : SADomainObject

@property (assign,nonatomic) char commercialPlaying; 
@property (nonatomic,copy) NSNumber * durationInMilliseconds; 
@property (nonatomic,retain) SALCMContent * nowPlaying; 
@property (nonatomic,copy) NSString * nowPlayingAppId; 
@property (assign,nonatomic) char paused; 
@property (nonatomic,copy) NSNumber * playbackPositionInMilliseconds; 
@property (nonatomic,copy) NSArray * viewingHistory; 
+(id)viewingContext;
+(id)viewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPaused:(char)arg1 ;
-(char)paused;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)commercialPlaying;
-(void)setCommercialPlaying:(char)arg1 ;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(SALCMContent *)nowPlaying;
-(void)setNowPlaying:(SALCMContent *)arg1 ;
-(NSString *)nowPlayingAppId;
-(void)setNowPlayingAppId:(NSString *)arg1 ;
-(NSNumber *)playbackPositionInMilliseconds;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
-(NSArray *)viewingHistory;
-(void)setViewingHistory:(NSArray *)arg1 ;
-(NSNumber *)durationInMilliseconds;
@end

