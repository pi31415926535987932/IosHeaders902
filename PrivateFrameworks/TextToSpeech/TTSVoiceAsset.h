/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSNumber;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {

	char _isInstalled;
	char _isBuiltInVoice;
	NSString* _name;
	NSArray* _languages;
	int _gender;
	int _footprint;
	NSNumber* _contentVersion;
	NSString* _masteredVersion;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;                     //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) int gender;                              //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) int footprint;                           //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) char isInstalled;                        //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) char isBuiltInVoice;                     //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,readonly) NSNumber * contentVersion;               //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSString * masteredVersion;              //@synthesize masteredVersion=_masteredVersion - In the implementation block
+(char)supportsSecureCoding;
-(char)isInstalled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)dictionaryRepresentation;
-(char)isBuiltInVoice;
-(int)footprint;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)languages;
-(int)gender;
-(NSString *)masteredVersion;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 isInstalled:(char)arg5 isBuiltIn:(char)arg6 ;
-(NSNumber *)contentVersion;
@end

