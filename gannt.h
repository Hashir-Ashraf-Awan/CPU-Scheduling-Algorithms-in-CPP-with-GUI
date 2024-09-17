#pragma once

#include <vector>
#include <utility>
#include <Windows.h>

#include <cliext/list>
using namespace cliext;

using namespace std;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class GanttChart : public Panel {
public:
    GanttChart() {
        this->DoubleBuffered = true;
    }

    void SetChartData(vector<pair<int, int>> chartData) {
        this->chartData = chartData;
        this->Invalidate();
    }

protected:
    virtual void OnPaint(PaintEventArgs^ e) override {
        Panel::OnPaint(e);
        Graphics^ g = e->Graphics;
        Pen^ pen = gcnew Pen(Color::Black, 2);
        SolidBrush^ brush = gcnew SolidBrush(Color::Blue);

        int x = 50;
        int y = 50;
        int height = 30;

        for (auto& data : chartData) {
            int start = data.first * 10; // Scale the time
            int length = data.second * 10; // Scale the time
            g->FillRectangle(brush, x + start, y, length, height);
            g->DrawRectangle(pen, x + start, y, length, height);
        }
    }

private:
    List<Tuple<int, int>^>^ chartData;
};
