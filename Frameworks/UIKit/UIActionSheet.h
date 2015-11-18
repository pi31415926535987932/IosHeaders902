/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIActionSheetDelegate;
@class UIAlertController, _UIAlertControllerShimPresenter, NSMutableArray, NSString;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {

	UIAlertController* _alertController;
	_UIAlertControllerShimPresenter* _presenter;
	UIActionSheet* _retainedSelf;
	NSMutableArray* _actions;
	int _cancelIndex;
	int _firstOtherButtonIndex;
	int _destructiveButtonIndex;
	int _actionSheetStyle;
	id _context;
	char _hasPreparedAlertActions;
	char _isPresented;
	char _alertControllerShouldDismiss;
	char _handlingAlertActionShouldDismiss;
	char _dismissingAlertController;
	id<UIActionSheetDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIActionSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int actionSheetStyle; 
@property (nonatomic,readonly) int numberOfButtons; 
@property (assign,nonatomic) int cancelButtonIndex; 
@property (assign,nonatomic) int destructiveButtonIndex; 
@property (nonatomic,readonly) int firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isAlertControllerShimClass;
+(Class)_popoverControllerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<UIActionSheetDelegate>)arg1 ;
-(void)dealloc;
-(id)_contentView;
-(void)setTitle:(NSString *)arg1 ;
-(id<UIActionSheetDelegate>)delegate;
-(int)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(char)arg2 ;
-(int)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(int)arg1 ;
-(NSString *)title;
-(id)context;
-(id)subtitle;
-(id)message;
-(id)_titleLabel;
-(void)showInView:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(char)isVisible;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setDefaultButtonIndex:(int)arg1 ;
-(void)setContext:(id)arg1 ;
-(int)firstOtherButtonIndex;
-(void)_setFirstOtherButtonIndex:(int)arg1 ;
-(void)_dismissForTappedIndex:(int)arg1 ;
-(char)_prepareToDismissForTappedIndex:(int)arg1 ;
-(id)_preparedAlertActionAtIndex:(unsigned)arg1 ;
-(id)_alertController;
-(void)_performPresentationDismissalWithClickedButtonIndex:(int)arg1 animated:(char)arg2 ;
-(void)_prepareAlertActions;
-(int)numberOfButtons;
-(void)_setIsPresented:(char)arg1 ;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(void)setTaglineText:(id)arg1 ;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)buttonAtIndex:(int)arg1 ;
-(id)_buttonAtIndex:(int)arg1 ;
-(id)buttonTitleAtIndex:(int)arg1 ;
-(void)presentSheetInView:(id)arg1 ;
-(void)setTitleMaxLineCount:(int)arg1 ;
-(void)setDimView:(id)arg1 ;
-(void)setDimsBackground:(char)arg1 ;
-(int)numberOfLinesInTitle;
-(char)_isSBAlert;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(void)setDestructiveButtonIndex:(int)arg1 ;
-(void)_didPresent;
-(void)_showFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned)arg3 animated:(char)arg4 ;
-(void)showFromBarButtonItem:(id)arg1 animated:(char)arg2 ;
-(void)setIndexOfSelectedButton:(int)arg1 ;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)setActionSheetStyle:(int)arg1 ;
-(int)actionSheetStyle;
-(int)destructiveButtonIndex;
-(void)showFromToolbar:(id)arg1 ;
-(void)showFromTabBar:(id)arg1 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 animated:(char)arg3 ;
-(void)presentFromBarButtonItem:(id)arg1 direction:(unsigned)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(int)arg4 animated:(char)arg5 ;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(int)arg5 animated:(char)arg6 ;
-(id)_relinquishPopoverController;
-(void)presentSheetInContentView:(id)arg1 ;
-(void)setInPopover:(char)arg1 ;
-(void)setUseThreeColumnsButtonsLayout:(char)arg1 ;
-(char)useThreeColumnsButtonsLayout;
-(void)_setIndexesOfSelectedButtons:(id)arg1 ;
-(void)_toggleButtonSelectionAtIndex:(unsigned)arg1 ;
-(id)_indexesOfSelectedButtons;
-(void)setSelectedButtonGlyphImage:(id)arg1 ;
-(void)setSelectedButtonGlyphHighlightedImage:(id)arg1 ;
-(void)_setAttributedTitleString:(id)arg1 ;
-(id)_attributedTitleString;
-(void)_setContentView:(id)arg1 ;
-(id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3 ;
-(id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3 ;
@end

