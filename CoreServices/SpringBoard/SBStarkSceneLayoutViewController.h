/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutViewController.h>

@protocol SBStarkSessionConfiguring;
@interface SBStarkSceneLayoutViewController : SBSceneLayoutViewController {

	id<SBStarkSessionConfiguring> _configuration;

}
+(Class)_layoutStateClass;
-(CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(id)initWithDisplay:(id)arg1 configuration:(id)arg2 ;
-(CGRect)_referenceFrameForApplicationIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)dealloc;
@end
