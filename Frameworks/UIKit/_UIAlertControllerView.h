/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol UIAlertControllerBackgroundView;
@class UIAlertController, UIView, UICollectionView, _UIAlertControllerCollectionViewFlowLayout, UILabel, NSMutableArray, UILongPressGestureRecognizer, _UIAlertControllerShadowedScrollView, _UIKeyboardLayoutAlignmentView, UIAlertControllerVisualStyle, _UIAlertControllerActionViewMetrics, NSLayoutConstraint, NSString;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {

	UIAlertController* _alertController;
	UIView* _roundedCornersView;
	UICollectionView* _actionCollectionView;
	_UIAlertControllerCollectionViewFlowLayout* _flowLayout;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _detailMessageLabel;
	UIView* _contentViewControllerContainerView;
	UIView* _textFieldViewControllerContainerView;
	NSMutableArray* _actionViews;
	UILongPressGestureRecognizer* _actionSelectionGestureRecognizer;
	CGPoint _actionSelectionInitialLocation;
	UIView*<UIAlertControllerBackgroundView> _backdropView;
	_UIAlertControllerShadowedScrollView* _contentScrollView;
	UIView* _contentScrollViewContentView;
	UIView* _contentView;
	UIView* _foregroundView;
	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* _keyboardLayoutAlignmentView;
	UIView* _keyboardLayoutAlignmentAvailableSpaceView;
	UIAlertControllerVisualStyle* _visualStyle;
	char _inPopover;
	char _hasDimmingView;
	char _showsCancelAction;
	char _cancelActionIsDiscrete;
	char _shouldHaveBackdropView;
	char _alignsToKeyboard;
	NSMutableArray* _backdropViewConstraints;
	NSMutableArray* _dimmingViewConstraints;
	NSMutableArray* _dimmingViewForegroundViewTopConstraints;
	NSMutableArray* _dimmingViewForegroundViewBottomConstraints;
	NSMutableArray* _dimmingViewConstraintsForAlertStyle;
	NSMutableArray* _dimmingViewConstraintsForActionSheetStyle;
	NSMutableArray* _noDimmingViewConstraints;
	char _hasCachedLargestActionDimension;
	CGSize _largestActionDimension;
	char _actionsReversed;
	char _presentationContextPrefersCancelActionShown;
	_UIAlertControllerActionViewMetrics* _actionViewMetrics;
	NSLayoutConstraint* _foregroundViewWidthConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _contentViewMaxHeightConstraint;
	NSLayoutConstraint* _titleLabelTopAlignmentConstraint;
	NSLayoutConstraint* _messageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _detailMessageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerViewLeftConstraint;
	NSLayoutConstraint* _contentViewControllerViewRightConstraint;
	NSLayoutConstraint* _contentViewControllerViewTopConstraint;
	NSLayoutConstraint* _contentViewControllerViewBottomConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewLeftConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewRightConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewTopConstraint;
	NSLayoutConstraint* _textFieldViewControllerViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewMaximumWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _textFieldViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _collectionViewTopAlignmentConstraint;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _collectionViewWidthConstraint;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	NSLayoutConstraint* _collectionViewHorizontalAlignmentConstraint;
	NSLayoutConstraint* _discreteCancelActionViewTopConstraint;
	NSLayoutConstraint* _discreteCancelActionViewLeadingConstraint;
	NSLayoutConstraint* _discreteCancelActionViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewHeightConstraint;
	NSLayoutConstraint* _roundedCornerViewTrailingEdgeConstraint;
	NSLayoutConstraint* _backdropViewBottomConstraint;
	NSLayoutConstraint* _backdropViewRightConstraint;
	CGSize _layoutSize;

}

@property (__weak) UIAlertController * alertController; 
@property (readonly) UIView * _foregroundView;                                                                      //@synthesize foregroundView=_foregroundView - In the implementation block
@property (readonly) UIView * _dimmingView;                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;                                      //@synthesize flowLayout=_flowLayout - In the implementation block
@property (readonly) UICollectionView * _actionCollectionView;                                                      //@synthesize actionCollectionView=_actionCollectionView - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle; 
@property (nonatomic,retain) _UIAlertControllerActionViewMetrics * actionViewMetrics;                               //@synthesize actionViewMetrics=_actionViewMetrics - In the implementation block
@property (assign,setter=_setActionsReversed:,getter=_actionsReversed,nonatomic) char actionsReversed;              //@synthesize actionsReversed=_actionsReversed - In the implementation block
@property (assign,setter=_setLayoutSize:,getter=_layoutSize,nonatomic) CGSize layoutSize;                           //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) float effectAlpha; 
@property (assign) char inPopover; 
@property (assign) char hasDimmingView; 
@property (assign,nonatomic) char presentationContextPrefersCancelActionShown;                                      //@synthesize presentationContextPrefersCancelActionShown=_presentationContextPrefersCancelActionShown - In the implementation block
@property (assign) char cancelActionIsDiscrete; 
@property (assign) char shouldHaveBackdropView; 
@property (assign) char alignsToKeyboard; 
@property (retain) NSLayoutConstraint * foregroundViewWidthConstraint;                                              //@synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewTopConstraint;                                                   //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewBottomConstraint;                                                //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewMaxHeightConstraint;                                             //@synthesize contentViewMaxHeightConstraint=_contentViewMaxHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * titleLabelTopAlignmentConstraint;                                           //@synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * messageLabelTopAlignmentConstraint;                                         //@synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * detailMessageLabelTopAlignmentConstraint;                                   //@synthesize detailMessageLabelTopAlignmentConstraint=_detailMessageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;                                    //@synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;                                   //@synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;                                     //@synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;                                  //@synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewLeftConstraint;                                  //@synthesize textFieldViewControllerViewLeftConstraint=_textFieldViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewRightConstraint;                                 //@synthesize textFieldViewControllerViewRightConstraint=_textFieldViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewTopConstraint;                                   //@synthesize textFieldViewControllerViewTopConstraint=_textFieldViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerViewBottomConstraint;                                //@synthesize textFieldViewControllerViewBottomConstraint=_textFieldViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewBottomConstraint;                                          //@synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewMaximumWidthConstraint;                                    //@synthesize contentScrollViewMaximumWidthConstraint=_contentScrollViewMaximumWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;                   //@synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;                          //@synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;                         //@synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewTopAlignmentConstraint;                 //@synthesize textFieldViewControllerContainerViewTopAlignmentConstraint=_textFieldViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewWidthConstraint;                        //@synthesize textFieldViewControllerContainerViewWidthConstraint=_textFieldViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * textFieldViewControllerContainerViewHeightConstraint;                       //@synthesize textFieldViewControllerContainerViewHeightConstraint=_textFieldViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewTopAlignmentConstraint;                                       //@synthesize collectionViewTopAlignmentConstraint=_collectionViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerXConstraint;                                                          //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerYConstraint;                                                          //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                            //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;                                                           //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewWidthConstraint;                                              //@synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewHeightConstraint;                                             //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewHorizontalAlignmentConstraint;                                //@synthesize collectionViewHorizontalAlignmentConstraint=_collectionViewHorizontalAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;                                      //@synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;                                  //@synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;                                    //@synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;                                   //@synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * roundedCornerViewTrailingEdgeConstraint;                                    //@synthesize roundedCornerViewTrailingEdgeConstraint=_roundedCornerViewTrailingEdgeConstraint - In the implementation block
@property (retain) NSLayoutConstraint * backdropViewBottomConstraint;                                               //@synthesize backdropViewBottomConstraint=_backdropViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * backdropViewRightConstraint;                                                //@synthesize backdropViewRightConstraint=_backdropViewRightConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)_retroactivelyRequiresConstraintBasedLayout;
-(void)_UIAppearance_setAlignsToKeyboard:(char)arg1 ;
-(void)_UIAppearance_setShouldHaveBackdropView:(char)arg1 ;
-(void)_UIAppearance_setPresentationContextPrefersCancelActionShown:(char)arg1 ;
-(void)_UIAppearance_setHasDimmingView:(char)arg1 ;
-(void)_UIAppearance_setInPopover:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(UIView *)_foregroundView;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(_UIAlertControllerCollectionViewFlowLayout *)_flowLayout;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)actions;
-(id)title;
-(id)preferredFocusedItem;
-(int)tintAdjustmentMode;
-(char)shouldChangeFocusedItem:(id)arg1 heading:(unsigned)arg2 ;
-(void)setTintAdjustmentMode:(int)arg1 ;
-(void)didMoveToSuperview;
-(char)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)message;
-(id)contentViewController;
-(UIView *)_dimmingView;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(char)inPopover;
-(void)_actionsChanged;
-(void)_propertiesChanged;
-(id)preferredAction;
-(void)_updatePreferredAction;
-(id)textFields;
-(void)_textFieldsChanged;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setHasDimmingView:(char)arg1 ;
-(void)setShouldHaveBackdropView:(char)arg1 ;
-(void)setAlignsToKeyboard:(char)arg1 ;
-(void)_setActionsReversed:(char)arg1 ;
-(char)_actionsReversed;
-(void)_setTitle:(id)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(id)_attributedTitle;
-(void)_setAttributedTitle:(id)arg1 ;
-(id)_attributedMessage;
-(void)_setAttributedMessage:(id)arg1 ;
-(id)_attributedDetailMessage;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(void)_didAddContentViewController;
-(void)_recomputeActionMetrics;
-(void)_setLayoutSize:(CGSize)arg1 ;
-(void)_actionLayoutDirectionChanged;
-(void)_setVisualStyle:(id)arg1 ;
-(void)_updateCancelActionBeingDiscrete;
-(char)_hasTitle;
-(char)_hasMessage;
-(id)_focusedAction;
-(id)cancelAction;
-(char)_hasAttributedTitle;
-(char)_hasAttributedMessage;
-(void)_removeContentViewController;
-(void)_sizeOfContentViewControllerChanged;
-(void)_sizeOfTextFieldViewControllerChanged;
-(void)_performPresentationAnimations:(char)arg1 ;
-(void)_scrollToPreferredActionAnimated:(char)arg1 ;
-(void)_prepareForActionSelectionWithGestureRecognizer:(id)arg1 ;
-(void)_performDismissalAnimations:(char)arg1 ;
-(void)setEffectAlpha:(float)arg1 ;
-(float)effectAlpha;
-(void)_handleActionSelectionGestureRecognizer:(id)arg1 ;
-(id)_textFieldViewController;
-(char)_hasDetailMessage;
-(CGSize)_layoutSize;
-(void)_updateContentView;
-(CGSize)_contentViewControllerSize;
-(UIAlertController *)alertController;
-(void)_contentSizeChanged;
-(id)actionDelimiterIndices;
-(void)setInPopover:(char)arg1 ;
-(void)_updateTintColor;
-(void)_accessibilityColorsChanged;
-(void)_updateActionViewVisualStyle:(id)arg1 ;
-(void)setPresentationContextPrefersCancelActionShown:(char)arg1 ;
-(void)_prepareViewsAndAddConstraints;
-(void)_prepareForegroundView;
-(void)_prepareContentView;
-(void)_prepareContentScrollView;
-(void)_prepareTitleLabel;
-(void)_prepareMesssageLabel;
-(void)_prepareDetailMessageLabel;
-(void)_prepareContentViewControllerContainerView;
-(void)_prepareTextFieldViewControllerContainerView;
-(void)_prepareActionCollectionView;
-(void)_prepareDimmingView;
-(void)_prepareKeyboardLayoutAlignmentViews;
-(void)_applyViewConstraints;
-(void)_applyTitleConstraints;
-(void)_applyMessageConstraints;
-(void)_applyDetailMessageConstraints;
-(void)_applyContentViewControllerContainerViewConstraints;
-(void)_applyTextFieldViewControllerContainerViewConstraints;
-(void)_prepareDimmingViewConstraints;
-(void)_prepareActionSelectionGestureRecognizer;
-(void)_invalidateFlowLayout;
-(char)_buttonsAreTopMost;
-(void)setContentScrollViewMaximumWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentScrollViewMaximumWidthConstraint;
-(void)setContentViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewMaxHeightConstraint;
-(char)_canLayOutActionsHorizontally;
-(id)_constraintToPinRoundedCornersViewTrailingEdgeForHorizontalLayout:(char)arg1 ;
-(void)setRoundedCornerViewTrailingEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)roundedCornerViewTrailingEdgeConstraint;
-(float)_labelHorizontalInsets;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewWidthConstraint;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewHeightConstraint;
-(CGSize)_sizeForLayoutWidthDetermination;
-(CGSize)_minimumSizeForAllActions;
-(char)_horizontalLayoutCanUseFullWidth;
-(float)_verticalLayoutWidth;
-(float)_availableWidthForHorizontalLayout:(char)arg1 ;
-(int)_numberOfActionsForCollectionView;
-(float)_idealLayoutWidth;
-(char)hasDiscreteHorizontalCancelAction;
-(CGSize)_itemSizeForHorizontalLayout:(char)arg1 ;
-(char)_hasTextFields;
-(char)showsCancelAction;
-(char)cancelActionIsDiscrete;
-(NSLayoutConstraint *)foregroundViewWidthConstraint;
-(float)_layoutWidthForHorizontalLayout:(char)arg1 ;
-(void)setForegroundViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_cancelActionView;
-(float)_marginBetweenContentAndDiscreteCancelAction;
-(void)_recomputeAlertControllerWidth;
-(CGSize)_collectionViewSizeForHorizontalLayout:(char)arg1 itemSize:(CGSize)arg2 ;
-(NSLayoutConstraint *)collectionViewWidthConstraint;
-(void)setCollectionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHorizontalAlignmentConstraint;
-(void)setCollectionViewHorizontalAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(char)shouldHaveBackdropView;
-(NSLayoutConstraint *)backdropViewRightConstraint;
-(void)setBackdropViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
-(NSLayoutConstraint *)discreteCancelActionViewTopConstraint;
-(void)setDiscreteCancelActionViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewLeadingConstraint;
-(void)setDiscreteCancelActionViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewWidthConstraint;
-(NSLayoutConstraint *)discreteCancelActionViewHeightConstraint;
-(NSLayoutConstraint *)titleLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)messageLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)contentViewControllerContainerViewTopAlignmentConstraint;
-(NSLayoutConstraint *)textFieldViewControllerContainerViewTopAlignmentConstraint;
-(NSLayoutConstraint *)collectionViewTopAlignmentConstraint;
-(NSLayoutConstraint *)backdropViewBottomConstraint;
-(NSLayoutConstraint *)detailMessageLabelTopAlignmentConstraint;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(NSLayoutConstraint *)contentScrollViewBottomConstraint;
-(void)setTitleLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCollectionViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBackdropViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(char)_hasDiscreteCancelAction;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateConstraintConstants;
-(void)_updateActionDelimiters;
-(id)_orderedActionsForCollectionView;
-(char)_shouldHaveCancelActionInCollectionView;
-(id)_actionsForCollectionView;
-(id)_actionViewAtLocation:(CGPoint)arg1 ;
-(char)_allowsHighlightingNewActionsOnGestureChange;
-(char)_containsTouches:(id)arg1 ;
-(void)_updateStyleForIdiomChange:(char)arg1 ;
-(void)_updateLabelFontSizes;
-(void)_updateLabelTextColor;
-(void)_updateLabelMaximumLines;
-(void)_updateBackdrop;
-(void)_updateCollectionViewForVisualStyleChange;
-(void)_updateCornerRadius;
-(void)_updateInsets;
-(void)_prepareBackdropViewConstraints;
-(id)_orderedActionViewsForCollectionView;
-(_UIAlertControllerActionViewMetrics *)actionViewMetrics;
-(id)_indexPathForPreferredAction;
-(void)_reevaluateSuperviewSizingConstraints;
-(char)hasDimmingView;
-(char)presentationContextPrefersCancelActionShown;
-(void)setCancelActionIsDiscrete:(char)arg1 ;
-(void)setDiscreteCancelActionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDiscreteCancelActionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(char)alignsToKeyboard;
-(void)_applyKeyboardAlignmentViewsConstraints;
-(NSLayoutConstraint *)contentViewControllerViewLeftConstraint;
-(NSLayoutConstraint *)contentViewControllerViewRightConstraint;
-(void)setContentViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerViewTopConstraint;
-(NSLayoutConstraint *)contentViewControllerViewBottomConstraint;
-(void)setContentViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewWidthConstraint;
-(void)setContentViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewHeightConstraint;
-(void)setContentViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActionViewMetrics:(_UIAlertControllerActionViewMetrics *)arg1 ;
-(NSLayoutConstraint *)centerXConstraint;
-(NSLayoutConstraint *)centerYConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(char)_actionLayoutIsVertical;
-(UICollectionView *)_actionCollectionView;
-(NSLayoutConstraint *)textFieldViewControllerViewLeftConstraint;
-(void)setTextFieldViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewRightConstraint;
-(void)setTextFieldViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewTopConstraint;
-(void)setTextFieldViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textFieldViewControllerViewBottomConstraint;
-(void)setTextFieldViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextFieldViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

