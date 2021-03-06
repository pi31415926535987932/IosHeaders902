/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShadowEffect.h>

@interface OADOuterShadowEffect : OADShadowEffect {

	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	char mRotateWithShape;

}
-(void)setAlignment:(int)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setRotateWithShape:(char)arg1 ;
-(char)rotateWithShape;
-(void)setYSkew:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setXSkew:(float)arg1 ;
-(void)setXScale:(float)arg1 ;
-(float)xScale;
-(float)yScale;
-(float)xSkew;
-(float)ySkew;
@end

