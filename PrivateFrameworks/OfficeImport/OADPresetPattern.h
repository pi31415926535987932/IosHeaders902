/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@interface OADPresetPattern : OADPattern {

	int mType;
	char mIsTypeOverridden;

}
+(id)defaultProperties;
+(id)nameForPresetPatternType:(int)arg1 ;
+(id)namedBitmapDataForPresetPatternType:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isTypeOverridden;
-(id)initWithDefaults;
-(char)isAnythingOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
@end

