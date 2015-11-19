/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDFormulaBuilding.h>

@class NSString;

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {

	EDBuildablePtg* mTree;
	int mWarning;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)formula;
-(int)tokenTypeAtIndex:(unsigned)arg1 ;
-(BOOL)isSupportedFormula;
-(void)setWarning:(int)arg1 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 ;
-(EDBuildablePtg*)tokenAtIndex:(unsigned)arg1 ;
-(int)warningType;
-(void)removeTokenAtIndex:(unsigned)arg1 ;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2 ;
-(char)convertToList:(unsigned)arg1 withFinalParen:(char)arg2 ;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3 ;
-(char)insertName:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(char)insertExternalName:(unsigned)arg1 withLink:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(char)addArrayWithCol:(int)arg1 andRow:(int)arg2 ;
-(char)convertToList:(unsigned)arg1 ;
-(char)convertToIntersect:(unsigned)arg1 ;
-(char)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(char*)arg1 withEDLinks:(id)arg2 ;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(char)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3 ;
-(char)shrinkSpanningRefAtArgIndex:(unsigned)arg1 ;
-(char)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3 ;
-(char)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(char)fixTableOfConstantsRefs;
-(char)uppercaseArgAtIndex:(unsigned)arg1 ;
-(EDBuildablePtg*)tokenAtIndex:(unsigned)arg1 previousToken:(EDBuildablePtg*)arg2 ;
-(char)insertName:(unsigned)arg1 link:(unsigned)arg2 external:(char)arg3 atIndex:(unsigned)arg4 ;
-(char)makeArrayForLastToken:(unsigned)arg1 ;
-(char)convertRefs:(unsigned)arg1 toTypes:(int*)arg2 ;
-(void)convertRefsInList:(EDBuildablePtg*)arg1 toType:(int)arg2 ;
-(char)shrinkSpanningRef:(EDBuildablePtg*)arg1 ;
-(char)fixTableOfConstantsRef:(EDBuildablePtg*)arg1 ;
-(id)stringFromStringTokenAtIndex:(unsigned)arg1 ;
-(void)replaceStringInStringTokenAtIndex:(unsigned)arg1 content:(id)arg2 ;
-(char)convertRefs:(unsigned)arg1 toType:(int)arg2 ;
-(void)copyToFormula:(id)arg1 ;
-(char)copyToken:(unsigned)arg1 from:(id)arg2 ;
-(BOOL)argTokenIsDurationAtIndex:(unsigned)arg1 ;
-(int)argTokenTypeAtIndex:(unsigned)arg1 ;
-(char)replaceArgPtgAtIndex:(unsigned)arg1 withFormula:(id)arg2 ;
-(char)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned)arg2 numArgs:(unsigned)arg3 ;
-(unsigned)removeOptionalPtgArgs:(unsigned)arg1 minArgs:(unsigned)arg2 ;
@end

