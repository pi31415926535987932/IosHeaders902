/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBSectionInfo, SBRowInfo;

@interface SBInfoOperand : NSObject {

	SBSectionInfo* _section;
	SBRowInfo* _row;

}

@property (nonatomic,retain,readonly) SBSectionInfo * section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,retain,readonly) SBRowInfo * row;                                   //@synthesize row=_row - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) char sectionOperand; 
+(id)operandWithSection:(id)arg1 row:(id)arg2 ;
-(char)isSectionOperand;
-(id)initWithSection:(id)arg1 row:(id)arg2 ;
-(void)dealloc;
-(SBRowInfo *)row;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(SBSectionInfo *)section;
@end
