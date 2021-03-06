/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIVisualEffectView.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKDayOccurrenceTravelTimeViewMetricsDelegate.h>

@class UIImageView, EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, UIView, EKEvent, UIColor, NSString;

@interface EKDayOccurrenceView : UIVisualEffectView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate> {

	float _visibleHeight;
	UIImageView* _eventBackgroundView;
	UIImageView* _travelBackgroundView;
	EKDayOccurrenceContentView* _content;
	EKDayOccurrenceTravelTimeView* _travelTimeContentView;
	char _needsContentCalc;
	char _needsBackgroundImageUpdate;
	UIView* _startResizeHandle;
	UIView* _endResizeHandle;
	float _originalXBeforeOffset;
	unsigned _touchKeptInsideOccurrence : 1;
	unsigned _offsetContentForLandscape : 1;
	char _visibleHeightLocked;
	UIEdgeInsets _padding;
	unsigned _bottomPinningState;
	CGRect _unpinnedEventBackgroundFrame;
	CGRect _unpinnedTravelBackgroundFrame;
	UIView* _pinFadeView;
	float _travelTimeSubviewHeightInPoints;
	char _selected;
	char _dimmed;
	char _allDayDrawingStyle;
	char _drawsResizeHandles;
	char _hideBackgroundImage;
	char _hideText;
	char _isSelectedCopyView;
	char _tentative;
	char _declined;
	char _needsReply;
	char _allDay;
	char _showsTravelTime;
	char _reduceLayoutProcessingForAnimation;
	char _touchesAreBeingTracked;
	id _delegate;
	EKDayOccurrenceView* _selectedCopy;
	EKEvent* _occurrence;
	UIColor* _color;
	float _cappedColorBarHeight;
	int _occurrenceBackgroundStyle;
	float _bottomPinningProximity;
	double _travelTime;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic,__weak) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) EKDayOccurrenceView * selectedCopy;              //@synthesize selectedCopy=_selectedCopy - In the implementation block
@property (nonatomic,readonly) char visibleHeightLocked; 
@property (nonatomic,retain) EKEvent * occurrence;                                   //@synthesize occurrence=_occurrence - In the implementation block
@property (assign,nonatomic) char selected;                                          //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) char dimmed;                                            //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) char allDayDrawingStyle;                                //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) char drawsResizeHandles;                                //@synthesize drawsResizeHandles=_drawsResizeHandles - In the implementation block
@property (assign,nonatomic) char usesSmallText; 
@property (assign,nonatomic) char hideBackgroundImage;                               //@synthesize hideBackgroundImage=_hideBackgroundImage - In the implementation block
@property (assign,nonatomic) char hideText;                                          //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                                    //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding; 
@property (assign,nonatomic) char isSelectedCopyView;                                //@synthesize isSelectedCopyView=_isSelectedCopyView - In the implementation block
@property (assign,nonatomic) float travelTimeSubviewHeightInPoints;                  //@synthesize travelTimeSubviewHeightInPoints=_travelTimeSubviewHeightInPoints - In the implementation block
@property (nonatomic,copy) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (assign,getter=isTentative,nonatomic) char tentative;                      //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) char declined;                        //@synthesize declined=_declined - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled; 
@property (assign,nonatomic) char needsReply;                                        //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,getter=isAllDay,nonatomic) char allDay;                            //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) char birthday; 
@property (assign,getter=isFacebook,nonatomic) char facebook; 
@property (assign,nonatomic) float cappedColorBarHeight;                             //@synthesize cappedColorBarHeight=_cappedColorBarHeight - In the implementation block
@property (assign,nonatomic) char showsTravelTime;                                   //@synthesize showsTravelTime=_showsTravelTime - In the implementation block
@property (assign,nonatomic) double travelTime;                                      //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) int routingMode; 
@property (nonatomic,retain) UIColor * titleTextColor; 
@property (nonatomic,retain) UIColor * timeTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor; 
@property (assign,nonatomic) int occurrenceBackgroundStyle;                          //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) char reduceLayoutProcessingForAnimation;                //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) float bottomPinningProximity;                           //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (nonatomic,readonly) char isPinned; 
@property (assign,nonatomic) char touchesAreBeingTracked;                            //@synthesize touchesAreBeingTracked=_touchesAreBeingTracked - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearCaches;
+(float)barToBarHorizontalDistanceIncludingBarWidth;
+(float)barToBarGapWidth;
+(UIEdgeInsets)defaultPadding;
+(id)occurrenceViewWithFrame:(CGRect)arg1 ;
+(float)colorBarThickness;
+(UIEdgeInsets)defaultMargin;
+(float)minimumHeightForOrientation:(int)arg1 isAllDay:(char)arg2 ;
+(float)bottomShadowMargin;
+(float)minimumHeightForOrientation:(int)arg1 ;
+(id)_viewCache;
+(float)minimumHeightForOrientation:(int)arg1 isAllDay:(char)arg2 usesSmallText:(char)arg3 ;
+(id)_color:(id)arg1 lightenedToPercentage:(float)arg2 withFinalAlpha:(float)arg3 ;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(float)arg4 colorBarStyle:(int)arg5 ;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(int)arg3 ;
+(id)_lightStripeColorForColor:(id)arg1 ;
+(id)_cachedImageForCalendarColor:(id)arg1 selected:(char)arg2 declined:(char)arg3 cancelled:(char)arg4 tentative:(char)arg5 needsReply:(char)arg6 colorBarStyle:(int)arg7 dayViewBackgroundStyle:(int)arg8 ;
+(void)_clearViewCache;
+(CGRect)contentStretchRectForFrame:(CGRect)arg1 ;
-(UIColor *)timeTextColor;
-(char)isAllDay;
-(void)setBottomPinningProximity:(float)arg1 ;
-(float)enoughHeightForOneLine;
-(float)viewMaxNaturalTextHeight;
-(EKEvent *)occurrence;
-(char)visibleHeightLocked;
-(void)setTravelTimeSubviewHeightInPoints:(float)arg1 ;
-(float)bottomPinningProximity;
-(void)setUsesSmallText:(char)arg1 ;
-(void)setReduceLayoutProcessingForAnimation:(char)arg1 ;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(void)setTimeTextColor:(UIColor *)arg1 ;
-(void)setTextBackgroundColor:(UIColor *)arg1 ;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(char)usesSmallText;
-(char)reduceLayoutProcessingForAnimation;
-(void)setTentative:(char)arg1 ;
-(void)setDeclined:(char)arg1 ;
-(void)setNeedsReply:(char)arg1 ;
-(int)routingMode;
-(void)setRoutingMode:(int)arg1 ;
-(float)_verticalContentInset;
-(char)isFacebook;
-(char)isBirthday;
-(void)setBirthday:(char)arg1 ;
-(void)setFacebook:(char)arg1 ;
-(char)isTentative;
-(char)isDeclined;
-(char)needsReply;
-(void)setAllDayDrawingStyle:(char)arg1 ;
-(char)hideText;
-(UIColor *)textBackgroundColor;
-(void)setHideText:(char)arg1 ;
-(char)drawsResizeHandles;
-(void)setDrawsResizeHandles:(char)arg1 ;
-(char)allDayDrawingStyle;
-(char)showsTravelTime;
-(void)setShowsTravelTime:(char)arg1 ;
-(float)travelTimeSubviewHeightInPoints;
-(char)isSelectedCopyView;
-(void)setIsSelectedCopyView:(char)arg1 ;
-(void)setCappedColorBarHeight:(float)arg1 ;
-(void)_addTravelTimeSubviews;
-(void)_removeTravelTimeSubviews;
-(char)_shouldShowTimeString;
-(void)_invalidateContentBounds;
-(void)setAllDayDrawingStyle:(char)arg1 animated:(char)arg2 ;
-(char)_isTimedOccurrenceDrawingStyle;
-(id)arrayOfResizeHandles;
-(EKDayOccurrenceView *)selectedCopy;
-(void)_updateResizeHandleLocations;
-(id)_newResizeHandleView;
-(CGRect)_frameMutatedForProximityToHourLine:(CGRect)arg1 ;
-(CGRect)_computeContentRect;
-(CGRect)_computeTravelTimeContentRect;
-(void)setTouchesAreBeingTracked:(char)arg1 ;
-(char)touchesAreBeingTracked;
-(void)_resetContentViewPosition;
-(void)setHideBackgroundImage:(char)arg1 ;
-(void)animateToFrame:(CGRect)arg1 isAllDay:(char)arg2 beginFromCurrentState:(char)arg3 whenFinished:(/*^block*/id)arg4 ;
-(void)invalidateTravelTimeHeight;
-(int)dragTypeFromPoint:(CGPoint)arg1 ;
-(void)bringResizeHandlesToFront;
-(float)unconstrainedWidth;
-(void)fadeInContentViewAt:(float)arg1 minWidth:(float)arg2 animated:(char)arg3 ;
-(char)resetContentViewToOriginalState:(char)arg1 ;
-(void)setHideText:(char)arg1 animate:(char)arg2 ;
-(void)setSelectedCopy:(EKDayOccurrenceView *)arg1 ;
-(char)hideBackgroundImage;
-(float)cappedColorBarHeight;
-(void)_updateColors;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(char)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(id)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)didMoveToSuperview;
-(id)_backgroundColor;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(char)isPinned;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setTime:(id)arg1 ;
-(id)time;
-(NSString *)location;
-(char)selected;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(void)setLocation:(NSString *)arg1 ;
-(void)setVisibleHeight:(float)arg1 ;
-(void)setDimmed:(char)arg1 ;
-(char)dimmed;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(char)hasIcon;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
@end

