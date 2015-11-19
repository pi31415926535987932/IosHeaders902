/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SANPVideoLanguageOption, NSString;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * availableSubtitles; 
@property (nonatomic,copy) NSArray * availableTracks; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentAudioTrack; 
@property (nonatomic,retain) SANPVideoLanguageOption * currentSubtitles; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAndSubtitleLanguageOptions;
+(id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)availableSubtitles;
-(void)setAvailableSubtitles:(NSArray *)arg1 ;
-(NSArray *)availableTracks;
-(void)setAvailableTracks:(NSArray *)arg1 ;
-(SANPVideoLanguageOption *)currentAudioTrack;
-(void)setCurrentAudioTrack:(SANPVideoLanguageOption *)arg1 ;
-(SANPVideoLanguageOption *)currentSubtitles;
-(void)setCurrentSubtitles:(SANPVideoLanguageOption *)arg1 ;
@end

