/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject {

	ABStyleProvider* _styleProvider;

}
-(id)newActionButton;
-(Class)propertyCellClass;
-(Class)actionCellClass;
-(id)newScrollingBackgroundView;
-(float)distanceBetweenSections;
-(void)setHighlighted:(char)arg1 onPropertyCell:(id)arg2 ;
-(void)setIndicatesFaceTimeHistory:(char)arg1 onActionButton:(id)arg2 ;
-(int)unknownModalPresentationStyle;
-(char)shouldUseCardContentProviderWhenAvailable;
-(Class)customCardCellClass;
-(Class)customCardActionCellClass;
-(id)newCardActionButton;
-(id)newCustomCardTableScrollingBackgroundView;
-(float)cardTableViewSectionHeaderHeightWhenEditing:(char)arg1 ;
-(float)cardTableViewSectionFooterHeightWhenEditing:(char)arg1 ;
-(char)shouldPropagateStylesToPickers;
-(char)shouldPropagateStylesThroughUnknownPersonActions;
-(void)customSetEmphasized:(char)arg1 onCell:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

