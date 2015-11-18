/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPNowPlayingInfoLanguageOption;

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent {

	MPNowPlayingInfoLanguageOption* _languageOption;

}

@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * languageOption;              //@synthesize languageOption=_languageOption - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPNowPlayingInfoLanguageOption *)languageOption;
@end

