/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, AVMediaSelectionOption;

@interface MPAlternateTrack : NSObject {

	NSString* _displayName;
	NSString* _canonicalLanguageIdentifier;
	AVMediaSelectionOption* _option;
	char _isMainProgram;
	char _isDVS;

}

@property (nonatomic,retain) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
@property (nonatomic,readonly) AVMediaSelectionOption * option;                     //@synthesize option=_option - In the implementation block
@property (nonatomic,readonly) char isMainProgram;                                  //@synthesize isMainProgram=_isMainProgram - In the implementation block
@property (nonatomic,readonly) char isDVS;                                          //@synthesize isDVS=_isDVS - In the implementation block
+(id)threeCharCodesForEncodedISO639_2_T:(id)arg1 ;
-(void)_setDisplayNameFromOption:(id)arg1 ;
-(NSString *)canonicalLanguageIdentifier;
-(char)isMainProgram;
-(char)isDVS;
-(AVMediaSelectionOption *)option;
-(id)initWithOption:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(int)compare:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

