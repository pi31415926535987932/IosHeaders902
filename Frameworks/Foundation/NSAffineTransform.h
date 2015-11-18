/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSAffineTransform : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NS7 _transformStruct;

}

@property (assign) SCD_Struct_NS7 transformStruct; 
+(char)supportsSecureCoding;
+(id)transform;
-(id)initWithTransform:(id)arg1 ;
-(void)rotateByRadians:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)scaleBy:(float)arg1 ;
-(void)translateXBy:(float)arg1 yBy:(float)arg2 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(void)scaleXBy:(float)arg1 yBy:(float)arg2 ;
-(SCD_Struct_NS7)transformStruct;
-(void)setTransformStruct:(SCD_Struct_NS7)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(void)prependTransform:(id)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(void)rotateByDegrees:(float)arg1 ;
-(void)invert;
@end
