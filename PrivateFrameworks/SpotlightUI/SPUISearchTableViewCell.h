/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface SPUISearchTableViewCell : UITableViewCell {

	char _addedConstantsConstraints;
	NSArray* _variableConstraints;

}

@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) float leftMargin; 
@property (nonatomic,readonly) float rightMargin; 
@property (nonatomic,readonly) float verticalImageMargin; 
+(id)lineColor;
+(id)backgroundColor;
+(void)initialize;
+(id)textColor;
+(id)highlightColor;
+(id)attributedStringForImage:(id)arg1 baselineOffset:(float)arg2 ;
+(id)attributedString:(id)arg1 withLineBreakMode:(int)arg2 defaultParagraphStyle:(id)arg3 ;
+(char)supportsSection:(id)arg1 result:(id)arg2 ;
+(char)shouldDisplayImagesForDomain:(unsigned)arg1 ;
+(id)tableViewCellClasses;
+(id)cellIdentifierForSection:(id)arg1 result:(id)arg2 ;
+(void)configureViewForDisplay:(id)arg1 viewType:(int)arg2 ;
+(void)registerClass:(Class)arg1 ;
-(NSArray *)variableConstraints;
-(NSArray *)constantConstraints;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(float)rightMargin;
-(float)leftMargin;
-(float)verticalImageMargin;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
@end

