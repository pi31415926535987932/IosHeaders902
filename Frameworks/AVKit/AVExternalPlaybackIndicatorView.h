/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface AVExternalPlaybackIndicatorView : UIView {

	UIImage* _externalPlaybackIndicatorImageLarge;
	UIImage* _externalPlaybackIndicatorImageSmall;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}
-(void)setTitleString:(id)arg1 subtitleString:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

