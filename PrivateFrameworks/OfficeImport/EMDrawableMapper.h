/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@interface EMDrawableMapper : CMDrawableMapper {

	double* mRowGrid;
	double* mColumnGrid;

}
+(char)isAnchorRelative:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(void)setBoundingBox;
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBounds;
-(id)initWithChartDrawable:(id)arg1 box:(CGRect)arg2 parent:(id)arg3 ;
-(id)worksheetMapper;
-(void)mapChartAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)getImageRect;
-(CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(CGPoint)anchorMarkerToPosition:(EDCellAnchorMarker)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 start:(char)arg4 relative:(char)arg5 ;
-(id)initWithOADDrawable:(id)arg1 parent:(id)arg2 ;
-(id)initWithOADDrawable:(id)arg1 rowGrid:(double*)arg2 columnGrid:(double*)arg3 ;
-(id)workbookMapper;
@end

