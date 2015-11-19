/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(id)imageProperties;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)movie;
-(id)initWithBlipRef:(id)arg1 ;
-(id)ole;
-(void)setOle:(id)arg1 ;
-(void)setMovie:(id)arg1 ;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
@end

