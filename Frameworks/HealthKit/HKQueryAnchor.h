/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying> {

	long long _rowid;

}

@property (assign,setter=_setRowid:,getter=_rowid,nonatomic) long long rowid;              //@synthesize rowid=_rowid - In the implementation block
+(id)anchorFromValue:(unsigned)arg1 ;
+(char)supportsSecureCoding;
+(id)_anchorWithRowid:(long long)arg1 ;
-(void)_setRowid:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_rowid;
@end

