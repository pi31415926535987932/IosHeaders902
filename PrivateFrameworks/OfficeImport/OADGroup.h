/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>
#import <libobjc.A.dylib/OADDrawableContainer.h>

@class NSMutableArray, NSString;

@interface OADGroup : OADDrawable <OADDrawableContainer> {

	CGRect mLogicalBounds;
	NSMutableArray* mChildren;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(unsigned)childCount;
-(CGRect)logicalBounds;
-(id)childAtIndex:(unsigned)arg1 ;
-(id)children;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)groupProperties;
-(void)addChildren:(id)arg1 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
@end

