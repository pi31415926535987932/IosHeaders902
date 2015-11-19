/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface RadioSeedMetadata : NSObject <NSCopying, NSMutableCopying> {

	NSString* _seedDescription;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * seedDescription;              //@synthesize seedDescription=_seedDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSeedMetadataDictionary:(id)arg1 ;
-(NSString *)seedDescription;
@end
