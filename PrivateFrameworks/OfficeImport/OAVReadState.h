/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@class OAXDrawingState, OCPPackagePart, NSMutableDictionary, NSMutableSet;

@interface OAVReadState : OCXReadState {

	Class mClient;
	OAXDrawingState* mOAXState;
	OCPPackagePart* mPackagePart;
	NSMutableDictionary* mShapeTypes;
	NSMutableDictionary* mShapeIdMap;
	NSMutableSet* mDualDrawables;

}
-(void)dealloc;
-(Class)client;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)resetForNewDrawing;
-(id)blipRefForURL:(id)arg1 ;
-(id)drawableForVmlShapeId:(id)arg1 ;
-(void)addDualDrawable:(id)arg1 ;
-(id)initWithClient:(Class)arg1 packagePart:(id)arg2 ;
-(id)oaxState;
-(void)setOAXState:(id)arg1 ;
-(unsigned short)shapeTypeForId:(id)arg1 ;
-(void)setShapeType:(unsigned short)arg1 forId:(id)arg2 ;
-(void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2 ;
-(char)isDualDrawable:(id)arg1 ;
-(unsigned long)officeArtShapeIdWithVmlShapeId:(id)arg1 ;
@end

