/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDisplayProfile : NSObject <NSSecureCoding, NSCopying> {

	int _type;

}

@property (nonatomic,readonly) int type;              //@synthesize type=_type - In the implementation block
+(char)supportsSecureCoding;
+(id)displayProfileOfType:(int)arg1 withDictionary:(id)arg2 bundle:(id)arg3 ;
+(Class)classForDisplayProfileType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

