/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, TSUProgressContext, CPProgressStage, NSDate;

@interface CPProgressContext : NSObject  {
    TSUProgressContext *m_parentProgressContext;
    CPProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (void)popBranch;
+ (void)pushBranch:(id)arg1;
+ (void)endBranch:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)removeProgressObserver:(id)arg1;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;
+ (void)advanceProgress:(double)arg1;
+ (id)stageForCurrentThread;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (id)contextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (void)endStage;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (double)currentPosition;
+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;

- (id)rootStage;
- (id)currentStage;
- (id)initWithParentContext:(id)arg1;
- (void)dealloc;
- (void)reportProgress:(double)arg1;

@end
