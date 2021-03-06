/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying> {

	NSDictionary* _outputSettingsDictionary;

}

@property (nonatomic,readonly) NSSet * compatibleMediaTypes; 
@property (nonatomic,readonly) char willYieldCompressedSamples; 
@property (nonatomic,readonly) NSDictionary * outputSettingsDictionary;              //@synthesize outputSettingsDictionary=_outputSettingsDictionary - In the implementation block
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)eligibleOutputSettingsDictionaryKeys;
+(unsigned)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2 ;
+(unsigned)validateOutputSettingsDictionary:(id)arg1 ;
+(id)outputSettingsWithOutputSettingsDictionary:(id)arg1 ;
+(id)defaultOutputSettingsForMediaType:(id)arg1 ;
-(NSSet *)compatibleMediaTypes;
-(char)willYieldCompressedSamples;
-(NSDictionary *)outputSettingsDictionary;
-(char)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(char)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(char)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

