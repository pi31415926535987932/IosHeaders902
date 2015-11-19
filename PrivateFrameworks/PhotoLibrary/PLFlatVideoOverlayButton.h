/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/PLVideoOverlayButton.h>

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton> {

	int _style;
	id _target;
	SEL _action;

}
-(void)_handleTap:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(int)style;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(float)arg1 backgroundAlpha:(float)arg2 glyphAlpha:(float)arg3 ;
@end

