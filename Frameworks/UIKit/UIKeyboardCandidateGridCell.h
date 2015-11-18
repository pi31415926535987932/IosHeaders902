/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface UIKeyboardCandidateGridCell : UICollectionViewCell {

	char _dummy;
	char _usesGroupHeaderAppearance;
	char _shouldShowCandidateNumber;
	char _secondaryCandidateAppearance;
	char _emphasizedAppearance;
	NSString* _text;
	NSString* _alternativeText;
	NSString* _annotationText;
	unsigned _candidateNumber;
	unsigned _edges;
	float _rowHeight;
	float _rightPadding;
	SCD_Struct_UI35 _visualStyling;
	int _candidatesVisualStyle;
	int _textAlignment;
	float _cellPadding;
	float _minimumWidth;
	UILabel* _textLabel;
	UILabel* _alternativeTextLabel;
	UILabel* _candidateNumberLabel;
	UILabel* _annotationLabel;
	CGSize _size;
	CGSize _candidateNumberSize;
	CGRect _visibleBounds;

}

@property (assign,nonatomic) char dummy;                                     //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) char usesGroupHeaderAppearance;                 //@synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * alternativeText;                       //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                        //@synthesize annotationText=_annotationText - In the implementation block
@property (assign,nonatomic) unsigned candidateNumber;                       //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) char shouldShowCandidateNumber;                 //@synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) char secondaryCandidateAppearance;              //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) char emphasizedAppearance;                      //@synthesize emphasizedAppearance=_emphasizedAppearance - In the implementation block
@property (assign,nonatomic) unsigned edges;                                 //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) float rowHeight;                                //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) float rightPadding;                             //@synthesize rightPadding=_rightPadding - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI35 visualStyling;                  //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                      //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) int textAlignment;                              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize candidateNumberSize;                     //@synthesize candidateNumberSize=_candidateNumberSize - In the implementation block
@property (assign,nonatomic) float cellPadding;                              //@synthesize cellPadding=_cellPadding - In the implementation block
@property (assign,nonatomic) float minimumWidth;                             //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,readonly) char canShowCandidateNumber; 
@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * alternativeTextLabel;                 //@synthesize alternativeTextLabel=_alternativeTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * candidateNumberLabel;                 //@synthesize candidateNumberLabel=_candidateNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * annotationLabel;                      //@synthesize annotationLabel=_annotationLabel - In the implementation block
+(id)reuseIdentifier;
+(char)drawsSideBorders;
+(CGColorRef)legacy_outlineShadowColorForVisualStyling:(SCD_Struct_UI35)arg1 candidatesVisualStyle:(int)arg2 ;
+(CGColorRef)legacy_outlineColorForVisualStyling:(SCD_Struct_UI35)arg1 candidatesVisualStyle:(int)arg2 ;
+(float)rightPaddingForIndex;
+(CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2 ;
+(float)widthForCandidate:(id)arg1 candidateNumber:(unsigned)arg2 visualStyle:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)size;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(void)setEdges:(unsigned)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)visibleBounds;
-(void)setHighlighted:(char)arg1 ;
-(void)setMinimumWidth:(float)arg1 ;
-(float)minimumWidth;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(int)textAlignment;
-(void)setVisualStyling:(SCD_Struct_UI35)arg1 ;
-(SCD_Struct_UI35)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(char)dummy;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(NSString *)annotationText;
-(void)setAnnotationText:(NSString *)arg1 ;
-(void)setShouldShowCandidateNumber:(char)arg1 ;
-(char)shouldShowCandidateNumber;
-(unsigned)candidateNumber;
-(char)usesGroupHeaderAppearance;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)updateLabels;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setDummy:(char)arg1 ;
-(void)setUsesGroupHeaderAppearance:(char)arg1 ;
-(unsigned)edges;
-(void)setRightPadding:(float)arg1 ;
-(void)setCellPadding:(float)arg1 ;
-(void)setCandidateNumber:(unsigned)arg1 ;
-(char)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(char)arg1 ;
-(char)emphasizedAppearance;
-(void)setEmphasizedAppearance:(char)arg1 ;
-(void)drawBackgroundAndBorders;
-(UILabel *)alternativeTextLabel;
-(UILabel *)candidateNumberLabel;
-(UILabel *)annotationLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(float)rightPadding;
-(float)cellPadding;
-(char)canShowCandidateNumber;
-(void)setAnnotationLabel:(UILabel *)arg1 ;
-(void)setAlternativeTextLabel:(UILabel *)arg1 ;
-(void)setCandidateNumberLabel:(UILabel *)arg1 ;
-(void)updateLabelColors;
-(void)updateGroupHeaderLabelPosition;
-(CGSize)candidateNumberSize;
-(void)setCandidateNumberSize:(CGSize)arg1 ;
@end

